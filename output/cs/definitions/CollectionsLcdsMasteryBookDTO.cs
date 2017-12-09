using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct CollectionsLcdsMasteryBookDTO
    {
        [DataMember(Name = "bookPages")]
        public CollectionsLcdsMasteryBookPageDTO[] BookPages { get; set; }

        [DataMember(Name = "dateString")]
        public string DateString { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CollectionsLcdsMasteryBookDTO {\n");
            sb.Append("  BookPages: ").Append(BookPages).Append("\n");
            sb.Append("  DateString: ").Append(DateString).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}