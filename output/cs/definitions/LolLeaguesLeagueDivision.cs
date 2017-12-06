using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLeaguesLeagueDivision
    {
        [DataMember(Name = "leagueRank")]
        LolLeaguesLeagueRank LeagueRank { get; set; }

        [DataMember(Name = "standings")]
        LolLeaguesLeagueStanding[] Standings { get; set; }

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