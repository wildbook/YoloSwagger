using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi
{
    [DataContract]
    struct PatcherProductResource
    {
        [DataMember(Name = "refresh_period")]
        uint? Refresh_period { get; set; }

        [DataMember(Name = "id")]
        string Id { get; set; }

        [DataMember(Name = "components")]
        PatcherComponentResource[] Components { get; set; }

        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class PatcherProductResource {\n");
            sb.Append("  Refresh_period: ").Append(Refresh_period).Append("\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  Components: ").Append(Components).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
    }
}