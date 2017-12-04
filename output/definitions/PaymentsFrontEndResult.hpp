#ifndef SWAGGER_TYPES_PaymentsFrontEndResult_HPP
#define SWAGGER_TYPES_PaymentsFrontEndResult_HPP
#include <json.hpp>
namespace test {
  // 
  struct PaymentsFrontEndResult {
'    // 
    std::string url;
  };

  void to_json(nlohmann::json& j, const PaymentsFrontEndResult& v) {
    j["url"] = v.url;
  }

  void from_json(const nlohmann::json& j, PaymentsFrontEndResult& v) {
    v.url = j.at("url").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_PaymentsFrontEndResult_HPP
