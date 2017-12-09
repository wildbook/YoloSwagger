using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolGameflowGameflowGameData
    {
        [DataMember(Name = "gameId")]
        public ulong GameId { get; set; }

        [DataMember(Name = "gameName")]
        public string GameName { get; set; }

        [DataMember(Name = "isCustomGame")]
        public bool IsCustomGame { get; set; }

        [DataMember(Name = "password")]
        public string Password { get; set; }

        [DataMember(Name = "playerChampionSelections")]
        public dynamic[] PlayerChampionSelections { get; set; }

        [DataMember(Name = "queue")]
        public LolGameflowQueue Queue { get; set; }

        [DataMember(Name = "spectatorsAllowed")]
        public bool SpectatorsAllowed { get; set; }

        [DataMember(Name = "teamOne")]
        public dynamic[] TeamOne { get; set; }

        [DataMember(Name = "teamTwo")]
        public dynamic[] TeamTwo { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGameflowGameflowGameData {\n");
            sb.Append("  GameId: ").Append(GameId).Append("\n");
            sb.Append("  GameName: ").Append(GameName).Append("\n");
            sb.Append("  IsCustomGame: ").Append(IsCustomGame).Append("\n");
            sb.Append("  Password: ").Append(Password).Append("\n");
            sb.Append("  PlayerChampionSelections: ").Append(PlayerChampionSelections).Append("\n");
            sb.Append("  Queue: ").Append(Queue).Append("\n");
            sb.Append("  SpectatorsAllowed: ").Append(SpectatorsAllowed).Append("\n");
            sb.Append("  TeamOne: ").Append(TeamOne).Append("\n");
            sb.Append("  TeamTwo: ").Append(TeamTwo).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}