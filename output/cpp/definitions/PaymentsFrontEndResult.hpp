#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PaymentsFrontEndResult_t {
    std::string_t url;
  };

  inline void to_json(nlohmann::json& j, const PaymentsFrontEndResult_t& v) {
    j["url"] = v.url;
  }

  inline void from_json(const nlohmann::json& j, PaymentsFrontEndResult_t& v) {
    v.url = j.at("url").get<std::string_t>();
  }
  inline std::string to_string(const PaymentsFrontEndResult_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
