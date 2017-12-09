#pragma once
#include "../client.hpp"
#include "PaymentsFrontEndResult.hpp"
#include "PaymentsFrontEndRequest.hpp"
namespace leagueapi {
  PaymentsFrontEndResult_t PostPaymentsV1PmcStartUrl (const ClientInfo& info,
    const PaymentsFrontEndRequest_t& options)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(options).dump();
    std::string path = "/payments/v1/pmc-start-url";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
