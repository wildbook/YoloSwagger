#pragma once
#include <json.hpp>
#include <optional>
#include "RecofrienderFriendState.hpp"
namespace leagueapi {
  struct RecofrienderContactResource_t {
    uint64_t accountId;
    uint64_t summonerId;
    int64_t recommendScore;
    std::string imageUrl;
    RecofrienderFriendState_t friendState;
    std::string action;
    std::string displayState;
    std::string source;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderContactResource_t& v) {
    j["accountId"] = v.accountId;
    j["summonerId"] = v.summonerId;
    j["recommendScore"] = v.recommendScore;
    j["imageUrl"] = v.imageUrl;
    j["friendState"] = v.friendState;
    j["action"] = v.action;
    j["displayState"] = v.displayState;
    j["source"] = v.source;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderContactResource_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.recommendScore = j.at("recommendScore").get<int64_t>();
    v.imageUrl = j.at("imageUrl").get<std::string>();
    v.friendState = j.at("friendState").get<RecofrienderFriendState_t>();
    v.action = j.at("action").get<std::string>();
    v.displayState = j.at("displayState").get<std::string>();
    v.source = j.at("source").get<std::string>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const RecofrienderContactResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
