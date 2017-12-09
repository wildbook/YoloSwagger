using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolPerksGameflowGameData
    {
        [DataMember(Name = "isCustomGame")]
        public bool IsCustomGame { get; set; }

        [DataMember(Name = "queue")]
        public LolPerksQueue Queue { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolPerksGameflowGameData {\n");
            sb.Append("  IsCustomGame: ").Append(IsCustomGame).Append("\n");
            sb.Append("  Queue: ").Append(Queue).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}