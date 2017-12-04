#ifndef SWAGGER_TYPES_RecofrienderContactStateResource_HPP
#define SWAGGER_TYPES_RecofrienderContactStateResource_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct RecofrienderContactStateResource {
    // 
    uint64_t accountId;
    // 
    std::string action;
    // 
    std::string displayState;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderContactStateResource& v) {
    j["accountId"] = v.accountId;
    j["action"] = v.action;
    j["displayState"] = v.displayState;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderContactStateResource& v) {
    v.accountId = j.at("accountId").get<uint64_t>;
    v.action = j.at("action").get<std::string>;
    v.displayState = j.at("displayState").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_RecofrienderContactStateResource_HPP
