/**
 * @class ErrorHandle
 * @brief Klasa do zarządzania błędami
 */
class ErrorHandle {
  public:
    /**
     * @brief Konstruktor domyślny
     */
    ErrorHandle();

    /**
     * @brief Konstruktor kopiujący
     * @param[in] rhs Obiekt do skopiowania
     */
    ErrorHandle(const ErrorHandle& rhs);

    /**
     * @brief Destruktor
     */
    ~ErrorHandle();

    /**
     * @brief Funkcja uzyskująca dostęp do składowych
     * @return Referencja do składowej
     */
    int& getData();

    /**
     * @brief Funkcja obliczeniowa
     * @param[in] x Argument funkcji
     * @return Wynik obliczenia
     */
    int calculate(int x);

  private:
    int data_; /**< Składowa */
};
