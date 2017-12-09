using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct TournamentPhaseDTO
    {
        [DataMember(Name = "id")]
        public long Id { get; set; }

        [DataMember(Name = "period")]
        public int Period { get; set; }

        [DataMember(Name = "registrationTime")]
        public long RegistrationTime { get; set; }

        [DataMember(Name = "startTime")]
        public long StartTime { get; set; }

        [DataMember(Name = "tournamentId")]
        public long TournamentId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class TournamentPhaseDTO {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Period: ").Append(Period).Append("\n");
            sb.Append("  RegistrationTime: ").Append(RegistrationTime).Append("\n");
            sb.Append("  StartTime: ").Append(StartTime).Append("\n");
            sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}