using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolQueueEligibilityCollectionsPlayableChampionCounts
    {
        [DataMember(Name = "championsOwned")]
        public uint ChampionsOwned { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolQueueEligibilityCollectionsPlayableChampionCounts {\n");
            sb.Append("  ChampionsOwned: ").Append(ChampionsOwned).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}