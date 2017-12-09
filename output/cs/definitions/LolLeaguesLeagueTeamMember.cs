using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolLeaguesLeagueTeamMember
    {
        [DataMember(Name = "id")]
        public ulong Id { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "totalGamePlayed")]
        public ulong TotalGamePlayed { get; set; }

        [DataMember(Name = "winRate")]
        public float WinRate { get; set; }

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