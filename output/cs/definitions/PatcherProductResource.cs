using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace LeagueClientApi.Definitions
{
    [DataContract]
    public struct PatcherProductResource
    {
        [DataMember(Name = "components")]
        public PatcherComponentResource[] Components { get; set; }

        [DataMember(Name = "id")]
        public string Id { get; set; }

        [DataMember(Name = "refresh_period")]
        public uint? Refresh_period { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PatcherProductResource {\n");
            sb.Append("  Components: ").Append(Components).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Refresh_period: ").Append(Refresh_period).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}