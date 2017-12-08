using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct CollectionsLcdsSpellBookDTO
    {
        [DataMember(Name = "bookPages")]
        CollectionsLcdsSpellBookPageDTO[] BookPages { get; set; }

        [DataMember(Name = "dateString")]
        string DateString { get; set; }

        [DataMember(Name = "summonerId")]
        ulong SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CollectionsLcdsSpellBookDTO {\n");
            sb.Append("  BookPages: ").Append(BookPages).Append("\n");
            sb.Append("  DateString: ").Append(DateString).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}