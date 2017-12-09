using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct RosterMemberDTO
    {
        [DataMember(Name = "currentBid")]
        public int CurrentBid { get; set; }

        [DataMember(Name = "joinTime")]
        public long JoinTime { get; set; }

        [DataMember(Name = "playerId")]
        public ulong PlayerId { get; set; }

        [DataMember(Name = "position")]
        public Position Position { get; set; }

        [DataMember(Name = "rosterId")]
        public long RosterId { get; set; }

        [DataMember(Name = "tournamentId")]
        public long TournamentId { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class RosterMemberDTO {\n");
            sb.Append("  CurrentBid: ").Append(CurrentBid).Append("\n");
            sb.Append("  JoinTime: ").Append(JoinTime).Append("\n");
            sb.Append("  PlayerId: ").Append(PlayerId).Append("\n");
            sb.Append("  Position: ").Append(Position).Append("\n");
            sb.Append("  RosterId: ").Append(RosterId).Append("\n");
            sb.Append("  TournamentId: ").Append(TournamentId).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}