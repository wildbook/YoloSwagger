using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolClashSetPositionRequest
    {
        [DataMember(Name = "position")]
        public Position Position { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolClashSetPositionRequest {\n");
            sb.Append("  Position: ").Append(Position).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}