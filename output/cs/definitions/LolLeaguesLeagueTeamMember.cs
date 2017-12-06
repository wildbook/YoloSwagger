using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolLeaguesLeagueTeamMember
    {
        [DataMember(Name = "id")]
        ulong Id { get; set; }

        [DataMember(Name = "name")]
        string Name { get; set; }

        [DataMember(Name = "totalGamePlayed")]
        ulong TotalGamePlayed { get; set; }

        [DataMember(Name = "winRate")]
        float WinRate { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolLeaguesLeagueTeamMember {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  TotalGamePlayed: ").Append(TotalGamePlayed).Append("\n");
            sb.Append("  WinRate: ").Append(WinRate).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}