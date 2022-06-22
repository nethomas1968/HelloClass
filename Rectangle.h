class Rectangle {
private:
    uint32_t width, height;
    bool bIsValid;

public:
    Rectangle ();
    Rectangle (uint32_t, uint32_t);
    
    // Methods
    bool isValid();
    void setValues(uint32_t, uint32_t);
    void setX(uint32_t);
    void setY(uint32_t);
    uint32_t getArea();
};
