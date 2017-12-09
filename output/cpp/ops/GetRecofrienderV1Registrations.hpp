#pragma once
#include "../client.hpp"
#include "RecofrienderLinkResource.hpp"
namespace leagueapi {
  std::vector<RecofrienderLinkResource_t> GetRecofrienderV1Registrations (const ClientInfo& info,
    const std::optional<std::string>& cb = std::nullopt)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/recofriender/v1/registrations";
    Headers query;
    if({0})
      query["cb"] = *cb;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
