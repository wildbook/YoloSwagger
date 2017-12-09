using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct CollectionsLcdsSummonerRuneInventory
    {
        [DataMember(Name = "dateString")]
        public string DateString { get; set; }

        [DataMember(Name = "summonerId")]
        public ulong SummonerId { get; set; }

        [DataMember(Name = "summonerRunes")]
        public CollectionsLcdsSummonerRune[] SummonerRunes { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class CollectionsLcdsSummonerRuneInventory {\n");
            sb.Append("  DateString: ").Append(DateString).Append("\n");
            sb.Append("  SummonerId: ").Append(SummonerId).Append("\n");
            sb.Append("  SummonerRunes: ").Append(SummonerRunes).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}