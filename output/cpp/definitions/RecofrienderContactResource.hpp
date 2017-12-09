#pragma once
#include <json.hpp>
#include <optional>
#include "RecofrienderFriendState.hpp"
namespace leagueapi {
  struct RecofrienderContactResource_t {
    int64_t recommendScore;
    std::string name;
    std::string displayState;
    std::string action;
    std::string imageUrl;
    std::string source;
    uint64_t summonerId;
    RecofrienderFriendState_t friendState;
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderContactResource_t& v) {
    j["recommendScore"] = v.recommendScore;
    j["name"] = v.name;
    j["displayState"] = v.displayState;
    j["action"] = v.action;
    j["imageUrl"] = v.imageUrl;
    j["source"] = v.source;
    j["summonerId"] = v.summonerId;
    j["friendState"] = v.friendState;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderContactResource_t& v) {
    v.recommendScore = j.at("recommendScore").get<int64_t>();
    v.name = j.at("name").get<std::string>();
    v.displayState = j.at("displayState").get<std::string>();
    v.action = j.at("action").get<std::string>();
    v.imageUrl = j.at("imageUrl").get<std::string>();
    v.source = j.at("source").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.friendState = j.at("friendState").get<RecofrienderFriendState_t>();
    v.accountId = j.at("accountId").get<uint64_t>();
  }
  inline std::string to_string(const RecofrienderContactResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
