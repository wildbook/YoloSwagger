using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct ChampSelectLcdsGameDTO
    {
        [DataMember(Name = "bannedChampions")]
        public BannedChampion[] BannedChampions { get; set; }

        [DataMember(Name = "gameMutators")]
        public string[] GameMutators { get; set; }

        [DataMember(Name = "gameState")]
        public string GameState { get; set; }

        [DataMember(Name = "id")]
        public ulong Id { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "optimisticLock")]
        public long OptimisticLock { get; set; }

        [DataMember(Name = "pickTurn")]
        public int PickTurn { get; set; }

        [DataMember(Name = "playerChampionSelections")]
        public ChampSelectLcdsPlayerChampionSelectionDTO[] PlayerChampionSelections { get; set; }

        [DataMember(Name = "queueTypeName")]
        public string QueueTypeName { get; set; }

        [DataMember(Name = "roomName")]
        public string RoomName { get; set; }

        [DataMember(Name = "roomPassword")]
        public string RoomPassword { get; set; }

        [DataMember(Name = "spectatorDelay")]
        public long SpectatorDelay { get; set; }

        [DataMember(Name = "statusOfParticipants")]
        public string StatusOfParticipants { get; set; }

        [DataMember(Name = "teamOne")]
        public dynamic[] TeamOne { get; set; }

        [DataMember(Name = "teamTwo")]
        public dynamic[] TeamTwo { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ChampSelectLcdsGameDTO {\n");
            sb.Append("  BannedChampions: ").Append(BannedChampions).Append("\n");
            sb.Append("  GameMutators: ").Append(GameMutators).Append("\n");
            sb.Append("  GameState: ").Append(GameState).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  OptimisticLock: ").Append(OptimisticLock).Append("\n");
            sb.Append("  PickTurn: ").Append(PickTurn).Append("\n");
            sb.Append("  PlayerChampionSelections: ").Append(PlayerChampionSelections).Append("\n");
            sb.Append("  QueueTypeName: ").Append(QueueTypeName).Append("\n");
            sb.Append("  RoomName: ").Append(RoomName).Append("\n");
            sb.Append("  RoomPassword: ").Append(RoomPassword).Append("\n");
            sb.Append("  SpectatorDelay: ").Append(SpectatorDelay).Append("\n");
            sb.Append("  StatusOfParticipants: ").Append(StatusOfParticipants).Append("\n");
            sb.Append("  TeamOne: ").Append(TeamOne).Append("\n");
            sb.Append("  TeamTwo: ").Append(TeamTwo).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}