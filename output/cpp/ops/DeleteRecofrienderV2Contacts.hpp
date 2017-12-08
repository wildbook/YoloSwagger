#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void DeleteRecofrienderV2Contacts (const ClientInfo& info)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/recofriender/v2/contacts";
    HttpsClient client(info.host, false);
    auto res = client.request("delete", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
