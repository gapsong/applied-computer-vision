namespace hardwareInterface
{
    void init();
    void shutdown();
    int getButtons();
    void setLED(bool LED);
    namespace battery
    {
        enum Cell
        {
            CELL_1 = 0,
            CELL_2 = 1,
            CELL_3 = 2,
        };
        float getCellVoltage(Cell cell);
        float getBatteryCurrentAmps();
        void killPower();
    }
    namespace motors
    {
        void enable(bool enable);
        void setSpeed(float left, float right);
        void getSteps(std::int16_t &left, std::int16_t &right);
        float getControllerCPUUsage();
    }
    namespace lcd
    {
        void initDisplay();
        void clear();
        void backlight(bool on);
        void writeLine(const std::string &msg, unsigned line);
        void setCursor(unsigned line, unsigned col);
        void write(const std::string &msg);
    }
}
