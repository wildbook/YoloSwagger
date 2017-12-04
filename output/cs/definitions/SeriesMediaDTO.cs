using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct SeriesMediaDTO {
    [DataMember(Name = "backgroundUrl")]
    string BackgroundUrl {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class SeriesMediaDTO {\n");
      sb.Append("  BackgroundUrl: ").Append(BackgroundUrl).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}