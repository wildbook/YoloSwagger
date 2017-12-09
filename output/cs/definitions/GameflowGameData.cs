using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct GameflowGameData
    {
        [DataMember(Name = "queue")]
        public Queue Queue { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class GameflowGameData {\n");
            sb.Append("  Queue: ").Append(Queue).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}