using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLeaguesLeagueDivision
    {
        [DataMember(Name = "standings")]
        LolLeaguesLeagueStanding[] Standings { get; set; }

        [DataMember(Name = "leagueRank")]
        LolLeaguesLeagueRank LeagueRank { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLeaguesLeagueDivision {\n");
            sb.Append("  Standings: ").Append(Standings).Append("\n");
            sb.Append("  LeagueRank: ").Append(LeagueRank).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}