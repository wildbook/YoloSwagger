using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLeaguesLeagueDivision
    {
        [DataMember(Name = "leagueRank")]
        public LolLeaguesLeagueRank LeagueRank { get; set; }

        [DataMember(Name = "standings")]
        public LolLeaguesLeagueStanding[] Standings { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLeaguesLeagueDivision {\n");
            sb.Append("  LeagueRank: ").Append(LeagueRank).Append("\n");
            sb.Append("  Standings: ").Append(Standings).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}