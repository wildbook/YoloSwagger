using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct CollectionsLcdsSummonerIconInventoryDTO
    {
        [DataMember(Name = "dateString")]
        public string DateString { get; set; }

        [DataMember(Name = "summonerIcons")]
        public CollectionsLcdsSummonerIcon[] SummonerIcons { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CollectionsLcdsSummonerIconInventoryDTO {\n");
            sb.Append("  DateString: ").Append(DateString).Append("\n");
            sb.Append("  SummonerIcons: ").Append(SummonerIcons).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}