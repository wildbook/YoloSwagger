using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct ReplayMetadataV2
    {
        [DataMember(Name = "fileSize")]
        uint FileSize { get; set; }

        [DataMember(Name = "gameVersion")]
        string GameVersion { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class ReplayMetadataV2 {\n");
            sb.Append("  FileSize: ").Append(FileSize).Append("\n");
            sb.Append("  GameVersion: ").Append(GameVersion).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}