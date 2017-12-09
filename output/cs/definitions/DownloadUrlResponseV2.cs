using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct DownloadUrlResponseV2
    {
        [DataMember(Name = "url")]
        public string Url { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class DownloadUrlResponseV2 {\n");
            sb.Append("  Url: ").Append(Url).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}