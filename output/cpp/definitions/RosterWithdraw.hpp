#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RosterWithdraw_t {
    int64_t voteTimeoutMs;
    std::vector<int64_t> voteWithdrawMembers;
    uint64_t initVoteMember;
    int64_t gameStartBufferMs;
    int64_t initVoteTime;
    int64_t lockoutTimeMs;
    std::vector<int64_t> declineWithdrawMembers;
  };

  inline void to_json(nlohmann::json& j, const RosterWithdraw_t& v) {
    j["voteTimeoutMs"] = v.voteTimeoutMs;
    j["voteWithdrawMembers"] = v.voteWithdrawMembers;
    j["initVoteMember"] = v.initVoteMember;
    j["gameStartBufferMs"] = v.gameStartBufferMs;
    j["initVoteTime"] = v.initVoteTime;
    j["lockoutTimeMs"] = v.lockoutTimeMs;
    j["declineWithdrawMembers"] = v.declineWithdrawMembers;
  }

  inline void from_json(const nlohmann::json& j, RosterWithdraw_t& v) {
    v.voteTimeoutMs = j.at("voteTimeoutMs").get<int64_t>();
    v.voteWithdrawMembers = j.at("voteWithdrawMembers").get<std::vector<int64_t>>();
    v.initVoteMember = j.at("initVoteMember").get<uint64_t>();
    v.gameStartBufferMs = j.at("gameStartBufferMs").get<int64_t>();
    v.initVoteTime = j.at("initVoteTime").get<int64_t>();
    v.lockoutTimeMs = j.at("lockoutTimeMs").get<int64_t>();
    v.declineWithdrawMembers = j.at("declineWithdrawMembers").get<std::vector<int64_t>>();
  }
  inline std::string to_string(const RosterWithdraw_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
