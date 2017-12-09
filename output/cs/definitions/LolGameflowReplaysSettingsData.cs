using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct LolGameflowReplaysSettingsData
    {
        [DataMember(Name = "highlights-folder-path")]
        public string HighlightsFolderPath { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class LolGameflowReplaysSettingsData {\n");
            sb.Append("  HighlightsFolderPath: ").Append(HighlightsFolderPath).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}