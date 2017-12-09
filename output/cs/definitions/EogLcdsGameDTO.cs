using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct EogLcdsGameDTO
    {
        [DataMember(Name = "bannedChampions")]
        public BannedChampion[] BannedChampions { get; set; }

        [DataMember(Name = "gameState")]
        public string GameState { get; set; }

        [DataMember(Name = "id")]
        public ulong Id { get; set; }

        [DataMember(Name = "teamOne")]
        public PlayerParticipant[] TeamOne { get; set; }

        [DataMember(Name = "teamTwo")]
        public PlayerParticipant[] TeamTwo { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class EogLcdsGameDTO {\n");
            sb.Append("  BannedChampions: ").Append(BannedChampions).Append("\n");
            sb.Append("  GameState: ").Append(GameState).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  TeamOne: ").Append(TeamOne).Append("\n");
            sb.Append("  TeamTwo: ").Append(TeamTwo).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}