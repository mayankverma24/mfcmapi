
namespace exporter
{
	enum class exportType
	{
		text = 0,
		msgAnsi = 1,
		msgUnicode = 2,
		eml = 3,
		emlIConverter = 4,
		tnef = 5
	};

	class messageExporter
	{
	public:
		void init(exporter::exportType _exportType, HWND _hWnd, LPADRBOOK _lpAddrBook, bool _bPrompt);
		HRESULT exportMessage(LPMESSAGE lpMessage);

	private:
		exporter::exportType exportType{};
		std::wstring szExt{};
		std::wstring szDotExt{};
		std::wstring szFilter{};
		std::wstring dir{};
		HWND hWnd{};
		LPADRBOOK lpAddrBook{};
		bool bPrompt{};
	};
} // namespace exporter