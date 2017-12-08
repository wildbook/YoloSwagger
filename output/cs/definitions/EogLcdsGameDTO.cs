using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct EogLcdsGameDTO
    {
        [DataMember(Name = "teamTwo")]
        PlayerParticipant[] TeamTwo { get; set; }

        [DataMember(Name = "gameState")]
        string GameState { get; set; }

        [DataMember(Name = "id")]
        ulong Id { get; set; }

        [DataMember(Name = "teamOne")]
        PlayerParticipant[] TeamOne { get; set; }

        [DataMember(Name = "bannedChampions")]
        BannedChampion[] BannedChampions { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class EogLcdsGameDTO {\n");
            sb.Append("  TeamTwo: ").Append(TeamTwo).Append("\n");
            sb.Append("  GameState: ").Append(GameState).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  TeamOne: ").Append(TeamOne).Append("\n");
            sb.Append("  BannedChampions: ").Append(BannedChampions).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}