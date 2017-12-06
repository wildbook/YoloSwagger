using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct TournamentInfoMinimalDTO
    {
        [DataMember(Name = "time")]
        long Time { get; set; }

        [DataMember(Name = "tournamentInfo")]
        TournamentInfoDTO[] TournamentInfo { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class TournamentInfoMinimalDTO {\n");
            sb.Append("  Time: ").Append(Time).Append("\n");
            sb.Append("  TournamentInfo: ").Append(TournamentInfo).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}