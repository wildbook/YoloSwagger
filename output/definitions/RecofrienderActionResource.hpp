#ifndef SWAGGER_TYPES_RecofrienderActionResource_HPP
#define SWAGGER_TYPES_RecofrienderActionResource_HPP
#include <json.hpp>
namespace test {
  // 
  struct RecofrienderActionResource {
'    // 
    uint64_t accountId;
    // 
    std::string action;
    // 
    std::string platformId;
  };

  void to_json(nlohmann::json& j, const RecofrienderActionResource& v) {
    j["accountId"] = v.accountId;
    j["action"] = v.action;
    j["platformId"] = v.platformId;
  }

  void from_json(const nlohmann::json& j, RecofrienderActionResource& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.action = j.at("action").get<std::string>;
    v.platformId = j.at("platformId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RecofrienderActionResource_HPP
