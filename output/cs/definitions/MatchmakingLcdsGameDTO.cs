using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct MatchmakingLcdsGameDTO
    {
        [DataMember(Name = "gameState")]
        public string GameState { get; set; }

        [DataMember(Name = "statusOfParticipants")]
        public string StatusOfParticipants { get; set; }

        [DataMember(Name = "teamOne")]
        public MatchmakingLcdsPlayerParticipant[] TeamOne { get; set; }

        [DataMember(Name = "teamTwo")]
        public MatchmakingLcdsPlayerParticipant[] TeamTwo { get; set; }

        [DataMember(Name = "terminatedCondition")]
        public string TerminatedCondition { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class MatchmakingLcdsGameDTO {\n");
            sb.Append("  GameState: ").Append(GameState).Append("\n");
            sb.Append("  StatusOfParticipants: ").Append(StatusOfParticipants).Append("\n");
            sb.Append("  TeamOne: ").Append(TeamOne).Append("\n");
            sb.Append("  TeamTwo: ").Append(TeamTwo).Append("\n");
            sb.Append("  TerminatedCondition: ").Append(TerminatedCondition).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}