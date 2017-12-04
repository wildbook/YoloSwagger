using System.Text;
using System.Runtime.Serialization;
using System.Collections.Generic;
namespace leagueapi {
  struct Highlight {
    [DataMember(Name = "name")]
    string Name {get; set;}

    [DataMember(Name = "mtimeIso8601")]
    string MtimeIso8601 {get; set;}

    [DataMember(Name = "filepath")]
    string Filepath {get; set;}

    [DataMember(Name = "url")]
    string Url {get; set;}

    [DataMember(Name = "mtimeMsUtc")]
    ulong MtimeMsUtc {get; set;}

    [DataMember(Name = "fileSizeBytes")]
    ulong FileSizeBytes {get; set;}

    [DataMember(Name = "id")]
    ulong Id {get; set;}

    public override string ToString()
    {
      var sb = new StringBuilder();
      sb.Append("class Highlight {\n");
      sb.Append("  Name: ").Append(Name).Append("\n");
      sb.Append("  MtimeIso8601: ").Append(MtimeIso8601).Append("\n");
      sb.Append("  Filepath: ").Append(Filepath).Append("\n");
      sb.Append("  Url: ").Append(Url).Append("\n");
      sb.Append("  MtimeMsUtc: ").Append(MtimeMsUtc).Append("\n");
      sb.Append("  FileSizeBytes: ").Append(FileSizeBytes).Append("\n");
      sb.Append("  Id: ").Append(Id).Append("\n");
      sb.Append("}\n");
      return sb.ToString();
    }
  }
}