using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct Highlight
    {
        [DataMember(Name = "fileSizeBytes")]
        public ulong FileSizeBytes { get; set; }

        [DataMember(Name = "filepath")]
        public string Filepath { get; set; }

        [DataMember(Name = "id")]
        public ulong Id { get; set; }

        [DataMember(Name = "mtimeIso8601")]
        public string MtimeIso8601 { get; set; }

        [DataMember(Name = "mtimeMsUtc")]
        public ulong MtimeMsUtc { get; set; }

        [DataMember(Name = "name")]
        public string Name { get; set; }

        [DataMember(Name = "url")]
        public string Url { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class Highlight {\n");
            sb.Append("  FileSizeBytes: ").Append(FileSizeBytes).Append("\n");
            sb.Append("  Filepath: ").Append(Filepath).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  MtimeIso8601: ").Append(MtimeIso8601).Append("\n");
            sb.Append("  MtimeMsUtc: ").Append(MtimeMsUtc).Append("\n");
            sb.Append("  Name: ").Append(Name).Append("\n");
            sb.Append("  Url: ").Append(Url).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}