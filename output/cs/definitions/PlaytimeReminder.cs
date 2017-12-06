using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PlaytimeReminder
    {
        [DataMember(Name = "hours")]
        uint Hours { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PlaytimeReminder {\n");
            sb.Append("  Hours: ").Append(Hours).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}