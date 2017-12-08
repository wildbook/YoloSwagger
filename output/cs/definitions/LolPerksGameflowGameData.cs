using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct LolPerksGameflowGameData
    {
        [DataMember(Name = "queue")]
        LolPerksQueue Queue { get; set; }

        [DataMember(Name = "isCustomGame")]
        bool IsCustomGame { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPerksGameflowGameData {\n");
            sb.Append("  Queue: ").Append(Queue).Append("\n");
            sb.Append("  IsCustomGame: ").Append(IsCustomGame).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}