using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolMissionsCollectionsSummoner
    {
        [DataMember(Name = "summonerLevel")]
        public int SummonerLevel { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMissionsCollectionsSummoner {\n");
            sb.Append("  SummonerLevel: ").Append(SummonerLevel).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}