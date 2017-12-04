#ifndef SWAGGER_TYPES_RecofrienderContactStateResource_HPP
#define SWAGGER_TYPES_RecofrienderContactStateResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RecofrienderContactStateResource {
    // 
    std::string action;
    // 
    std::string displayState;
    // 
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderContactStateResource& v) {
    j["action"] = v.action;
    j["displayState"] = v.displayState;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderContactStateResource& v) {
    v.action = j.at("action").get<std::string>;
    v.displayState = j.at("displayState").get<std::string>;
    v.accountId = j.at("accountId").get<uint64_t>;
  }

}
#endif // SWAGGER_TYPES_RecofrienderContactStateResource_HPP
