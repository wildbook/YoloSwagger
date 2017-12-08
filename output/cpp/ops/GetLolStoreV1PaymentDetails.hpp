#pragma once
#incldue "../client.hpp"
namespace leagueapi {
  nlohmann::json_t GetLolStoreV1PaymentDetails (const ClientInfo& info,
    const std::string_t& action,
    const std::optional<uint64_t_t>& giftRecipientAccountId = std::nullopt,
    const std::optional<std::string_t>& giftMessage = std::nullopt)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/lol-store/v1/paymentDetails?action=" + UrlCode::encode(to_string(action));
    if(giftRecipientAccountId) {
      path.append("&giftRecipientAccountId="+UrlCode::encode(to_string(*giftRecipientAccountId)));
    }
    if(giftMessage) {
      path.append("&giftMessage="+UrlCode::encode(to_string(*giftMessage)));
    }
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}