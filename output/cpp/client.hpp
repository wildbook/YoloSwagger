#pragma once
#include <json.hpp>
#include <SimpleWeb/crypto.hpp>
#include <SimpleWeb/client_https.hpp>
#include <SimpleWeb/utility.hpp>
#include <stdexcept>
namespace leagueapi {
  using HttpsClient = SimpleWeb::Client<SimpleWeb::HTTPS>;
  using HttpsResponse = HttpsClient::Response;
  using HttpsResponsePtr = std::shared_ptr<HttpsClient::Response>;
  using Headers = SimpleWeb::CaseInsensitiveMultimap;
  using ErrorCode = SimpleWeb::error_code;
  using UrlCode = SimpleWeb::Percent;
  struct ClientInfo {
    std::string auth;
    std::string host;
  };

  struct OpError : public std::runtime_error {
    using std::runtime_error;
    using std::runtime_error::runtime_error;
  };

  inline std::string to_string(const nlohmann::json& v) {
    if(v.is_string()
      return v.get<std::string>()
    return v.dump();
  }
  inline const std::string& to_string(const std::string& v) {
    return v;
  }
}