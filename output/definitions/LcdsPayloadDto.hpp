#ifndef SWAGGER_TYPES_LcdsPayloadDto_HPP
#define SWAGGER_TYPES_LcdsPayloadDto_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LcdsPayloadDto {
    // 
    std::string body;
    // 
    std::map<std::string, std::string> headers;
    // 
    std::string method;
    // 
    std::string path;
  };

  void to_json(nlohmann::json& j, const LcdsPayloadDto& v) {
    j["body"] = v.body;
    j["headers"] = v.headers;
    j["method"] = v.method;
    j["path"] = v.path;
  }

  void from_json(const nlohmann::json& j, LcdsPayloadDto& v) {
    v.body = j.at("body").get<std::string>;
    v.headers = j.at("headers").get<std::map<std::string, std::string>>;
    v.method = j.at("method").get<std::string>;
    v.path = j.at("path").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LcdsPayloadDto_HPP
