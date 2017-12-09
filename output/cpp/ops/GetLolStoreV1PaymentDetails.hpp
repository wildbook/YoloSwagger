#pragma once
#include "../client.hpp"
namespace leagueapi {
  nlohmann::json GetLolStoreV1PaymentDetails (const ClientInfo& info,
    const std::string& action,
    const std::optional<uint64_t>& giftRecipientAccountId = std::nullopt,
    const std::optional<std::string>& giftMessage = std::nullopt)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-store/v1/paymentDetails";
    Headers query;
      query["action"] = action;
    if({0})
      query["giftRecipientAccountId"] = *giftRecipientAccountId;
    if({0})
      query["giftMessage"] = *giftMessage;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
