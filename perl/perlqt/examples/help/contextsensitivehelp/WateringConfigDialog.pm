package WateringConfigDialog;

use strict;
use warnings;
use Qt4;

use Ui_WateringConfigDialog;

use Qt4::isa qw( Qt4::Dialog );
use Qt4::slots
    focusChanged => ['QWidget*', 'QWidget*'];
    
sub NEW
{
    my ($class, $parent) = @_;
    $class->SUPER::NEW($parent);

    this->{m_ui} = Ui_WateringConfigDialog->setupUi(this);
    this->{m_widgetInfo} = {};
    this->{m_widgetInfo}->{this->{m_ui}->plantComboBox} = this->tr('plants');
    this->{m_widgetInfo}->{this->{m_ui}->temperatureCheckBox} = this->tr('temperature');
    this->{m_widgetInfo}->{this->{m_ui}->temperatureSpinBox} = this->tr('temperature');
    this->{m_widgetInfo}->{this->{m_ui}->rainCheckBox} = this->tr('rain');
    this->{m_widgetInfo}->{this->{m_ui}->rainSpinBox} = this->tr('rain');
    this->{m_widgetInfo}->{this->{m_ui}->startTimeEdit} = this->tr('starting time');
    this->{m_widgetInfo}->{this->{m_ui}->amountSpinBox} = this->tr('water amount');
    this->{m_widgetInfo}->{this->{m_ui}->sourceComboBox} = this->tr('water source');
    this->{m_widgetInfo}->{this->{m_ui}->filterCheckBox} = this->tr('water filtering');

    this->connect(qApp, SIGNAL 'focusChanged(QWidget*, QWidget*)',
        this, SLOT 'focusChanged(QWidget*, QWidget*)');
}

sub focusChanged
{
    my $now = $_[1];
    if (defined this->{m_widgetInfo}->{$now}) {
        this->{m_ui}->helpLabel->setText(sprintf this->tr('Information about %s:'), this->{m_widgetInfo}->{$now});
        my @lst = split ' ', this->{m_widgetInfo}->{$now};
        this->{m_ui}->helpBrowser->showHelpForKeyword($lst[-1]);
    }
}

1;
