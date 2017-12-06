using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolMatchHistoryMatchHistoryGame
    {
        [DataMember(Name = "gameCreation")]
        ulong GameCreation { get; set; }

        [DataMember(Name = "gameCreationDate")]
        string GameCreationDate { get; set; }

        [DataMember(Name = "gameDuration")]
        uint GameDuration { get; set; }

        [DataMember(Name = "gameId")]
        ulong GameId { get; set; }

        [DataMember(Name = "gameMode")]
        string GameMode { get; set; }

        [DataMember(Name = "gameType")]
        string GameType { get; set; }

        [DataMember(Name = "gameVersion")]
        string GameVersion { get; set; }

        [DataMember(Name = "mapId")]
        ushort MapId { get; set; }

        [DataMember(Name = "participantIdentities")]
        LolMatchHistoryMatchHistoryParticipantIdentities[] ParticipantIdentities { get; set; }

        [DataMember(Name = "participants")]
        LolMatchHistoryMatchHistoryParticipant[] Participants { get; set; }

        [DataMember(Name = "platformId")]
        string PlatformId { get; set; }

        [DataMember(Name = "queueId")]
        int QueueId { get; set; }

        [DataMember(Name = "seasonId")]
        ushort SeasonId { get; set; }

        [DataMember(Name = "teams")]
        LolMatchHistoryMatchHistoryTeam[] Teams { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolMatchHistoryMatchHistoryGame {\n");
            sb.Append("  GameCreation: ").Append(GameCreation).Append("\n");
            sb.Append("  GameCreationDate: ").Append(GameCreationDate).Append("\n");
            sb.Append("  GameDuration: ").Append(GameDuration).Append("\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  GameMode: ").Append(GameMode).Append("\n");
            sb.Append("  GameType: ").Append(GameType).Append("\n");
            sb.Append("  GameVersion: ").Append(GameVersion).Append("\n");
            sb.Append("  MapId: ").Append(MapId).Append("\n");
            sb.Append("  ParticipantIdentities: ").Append(ParticipantIdentities).Append("\n");
            sb.Append("  Participants: ").Append(Participants).Append("\n");
            sb.Append("  PlatformId: ").Append(PlatformId).Append("\n");
            sb.Append("  QueueId: ").Append(QueueId).Append("\n");
            sb.Append("  SeasonId: ").Append(SeasonId).Append("\n");
            sb.Append("  Teams: ").Append(Teams).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}