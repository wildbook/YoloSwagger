using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolGameflowGameflowGameData
    {
        [DataMember(Name = "gameId")]
        ulong GameId { get; set; }

        [DataMember(Name = "gameName")]
        string GameName { get; set; }

        [DataMember(Name = "isCustomGame")]
        bool IsCustomGame { get; set; }

        [DataMember(Name = "password")]
        string Password { get; set; }

        [DataMember(Name = "playerChampionSelections")]
        dynamic[] PlayerChampionSelections { get; set; }

        [DataMember(Name = "queue")]
        LolGameflowQueue Queue { get; set; }

        [DataMember(Name = "spectatorsAllowed")]
        bool SpectatorsAllowed { get; set; }

        [DataMember(Name = "teamOne")]
        dynamic[] TeamOne { get; set; }

        [DataMember(Name = "teamTwo")]
        dynamic[] TeamTwo { get; set; }

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